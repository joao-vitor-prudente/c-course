#include <stdio.h>

struct Question {
    char question[100];
    char options[5][100];
    int correct_option;
};

int main(int argc, char const *argv[])
{
    struct Question q_1 = {
        "q_1", {
            "q_1_op_1", 
            "q_1_op_2", 
            "q_1_op_3", 
            "q_1_op_4", 
            "q_1_op_5"
        }, 1
    };
    struct Question q_2 = {
        "q_2", {
            "q_2_op_1", 
            "q_2_op_2", 
            "q_2_op_3", 
            "q_2_op_4", 
            "q_2_op_5"
        }, 2
    };
    struct Question q_3 = {
        "q_3", {
            "q_3_op_1", 
            "q_3_op_2", 
            "q_3_op_3", 
            "q_3_op_4", 
            "q_3_op_5"
        }, 3
    };

    struct Question questions[3] = {q_1, q_2, q_3};

    int questions_size = sizeof(questions) / sizeof(questions[0]);
    int options_size = sizeof(questions[0].options) / sizeof(questions[0].options[0]);
    
    int score = 0;
    int answer;

    for (size_t q_i = 0; q_i < questions_size; q_i++)
    {
        printf("Question 1:\n%s\nOptions:\n", questions[q_i].question);
        
        for (size_t op_i = 0; op_i < options_size; op_i++)
        {
         printf("%s\n", questions[q_i].options[op_i]);   
        }

        printf("Answer:\n");
        scanf("%d", &answer);
        score += (answer == questions[q_i].correct_option);
    }
    printf("Your score is %d\n", score);
    
    return 0;
}
