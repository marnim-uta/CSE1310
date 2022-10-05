/*                          shortsub.c 
 *
 *   Synopsis  - Control is passed from the function main() to the
 *               function sub_funct() and back.
 *
 *   Objective - Illustrates a subfunction and function call. 
 *
 */

void does_nothing( void );                      /* Note 1 */

int main(void)
{
     does_nothing();                           /* Note 2 */
     return 0;
}

void does_nothing(void)                        /* Note 3 */
{
}
