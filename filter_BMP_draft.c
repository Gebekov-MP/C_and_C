// int equationforblur(int i, int j, int height, int width, RGBTRIPLE image[height][width], int RGB)
// {
//     float counter = 0;
//     int sum = 0;
//     for (int k = i - 1; k < (i + 2); k++)
//     {
//         for (int l = j - 1; l < (j + 2); l++)
//         {
//             if (k < 0 || l < 0 || k >= height || l >= width)
//             {
//                 ;
//             }
//             else
//             {
//                 if (RGB == 0)
//                 {
//                     sum += image[k][l].rgbtRed;
//                 }
//                 else if (RGB == 1)
//                 {
//                     sum += image[k][l].rgbtBlue;
//                 }
//                 else
//                 {
//                     sum += image[k][l].rgbtGreen;
//                 }
//                 counter++;
//             }
//         }
//     }
//     return round(sum / counter);
// }
// void blur(int height, int width, RGBTRIPLE image[height][width])
// {
//     RGBTRIPLE copy[height][width];
//     for (int i = 0; i < height; i ++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             copy[i][j] = image[i][j];
//         }
//     }
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             image[i][j].rgbtRed = equationforblur(i, j, height, width, copy, 0);
//             image[i][j].rgbtBlue = equationforblur(i, j, height, width, copy, 1);
//             image[i][j].rgbtGreen = equationforblur(i, j, height, width, copy, 2);
//         }
//     }
//     return;
// }
// Blur image
// void blur(int height, int width, RGBTRIPLE image[height][width])
// {
//     RGBTRIPLE tmp[height][width];
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             tmp[i][j] = image[i][j];
//         }
//     }

//     for (int i = 0, red, green, blue, counter; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             red = green = blue = counter = 0;

//             if (i >= 0 && j >= 0)
//             {
//                 red += tmp[i][j].rgbtRed;
//                 green += tmp[i][j].rgbtGreen;
//                 blue += tmp[i][j].rgbtBlue;
//                 counter++;
//             }
//             if (i >= 0 && j - 1 >= 0)
//             {
//                 red += tmp[i][j-1].rgbtRed;
//                 green += tmp[i][j-1].rgbtGreen;
//                 blue += tmp[i][j-1].rgbtBlue;
//                 counter++;
//             }
//             if ((i >= 0 && j + 1 >= 0) && (i >= 0 && j + 1 < width))
//             {
//                 red += tmp[i][j+1].rgbtRed;
//                 green += tmp[i][j+1].rgbtGreen;
//                 blue += tmp[i][j+1].rgbtBlue;
//                 counter++;
//             }
//             if (i - 1 >= 0 && j >= 0)
//             {
//                 red += tmp[i-1][j].rgbtRed;
//                 green += tmp[i-1][j].rgbtGreen;
//                 blue += tmp[i-1][j].rgbtBlue;
//                 counter++;
//             }
//             if (i - 1 >= 0 && j - 1 >= 0)
//             {
//                 red += tmp[i-1][j-1].rgbtRed;
//                 green += tmp[i-1][j-1].rgbtGreen;
//                 blue += tmp[i-1][j-1].rgbtBlue;
//                 counter++;
//             }
//             if ((i - 1 >= 0 && j + 1 >= 0) && (i - 1 >= 0 && j + 1 < width))
//             {
//                 red += tmp[i-1][j+1].rgbtRed;
//                 green += tmp[i-1][j+1].rgbtGreen;
//                 blue += tmp[i-1][j+1].rgbtBlue;
//                 counter++;
//             }
//             if ((i + 1 >= 0 && j >= 0) && (i + 1 < height && j >= 0))
//             {
//                 red += tmp[i+1][j].rgbtRed;
//                 green += tmp[i+1][j].rgbtGreen;
//                 blue += tmp[i+1][j].rgbtBlue;
//                 counter++;
//             }
//             if ((i + 1 >= 0 && j - 1 >= 0) && (i + 1 < height && j - 1 >= 0))
//             {
//                 red += tmp[i+1][j-1].rgbtRed;
//                 green += tmp[i+1][j-1].rgbtGreen;
//                 blue += tmp[i+1][j-1].rgbtBlue;
//                 counter++;
//             }
//             if ((i + 1 >= 0 && j + 1 >= 0) && (i + 1 < height && j + 1 < width))
//             {
//                 red += tmp[i+1][j+1].rgbtRed;
//                 green += tmp[i+1][j+1].rgbtGreen;
//                 blue += tmp[i+1][j+1].rgbtBlue;
//                 counter++;
//             }

//             image[i][j].rgbtRed = round(red / (counter*1.0));
//             image[i][j].rgbtGreen = round(green / (counter*1.0));
//             image[i][j].rgbtBlue = round(blue / (counter*1.0));
//         }
//     }

//     return;
// }
// void blur(int height, int width, RGBTRIPLE image[height][width])
// {
//     float blurRed;
//     float blurGreen;
//     float blurBlue;
    
//     RGBTRIPLE tmp[height][width];
    
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             if (i == 0)
//             {
//                 if (j == 0)
//                 {
//                     blurRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed)/ 4.0;
//                     blurGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen) / 4.0;
//                     blurBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue) / 4.0;
            
//                     tmp[i][j].rgbtRed = round(blurRed);
//                     tmp[i][j].rgbtGreen = round(blurGreen);
//                     tmp[i][j].rgbtBlue = round(blurBlue);
                    
//                 }
//                 else if (j == width - 1)
//                 {
//                     blurRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j - 1].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i][j].rgbtRed)/ 4.0;
//                     blurGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j - 1].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i][j].rgbtGreen) / 4.0;
//                     blurBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j - 1].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i][j].rgbtBlue) / 4.0;
            
//                     tmp[i][j].rgbtRed = round(blurRed);
//                     tmp[i][j].rgbtGreen = round(blurGreen);
//                     tmp[i][j].rgbtBlue = round(blurBlue);
//                 }
               
//             }
//             if (i == height - 1)
//             {
//                 if (j == 0)
//                 {
//                     blurRed = ((float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 4.0;
//                     blurGreen = ((float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 4.0;
//                     blurBlue = ((float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 4.0;
                
//                     tmp[i][j].rgbtRed = round(blurRed);
//                     tmp[i][j].rgbtGreen = round(blurGreen);
//                     tmp[i][j].rgbtBlue = round(blurBlue);
//                 }
//                 if (j == width - 1)
//                 {
//                     blurRed = ((float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed) / 4.0;
//                     blurGreen = ((float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen) / 4.0;
//                     blurBlue = ((float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue) / 4.0;
                
//                     tmp[i][j].rgbtRed = round(blurRed);
//                     tmp[i][j].rgbtGreen = round(blurGreen);
//                     tmp[i][j].rgbtBlue = round(blurBlue);
//                 }
//             }
//         }
//     }
//     for (int i = 1; i < height - 1; i++)
//     {
//         for (int j = 1; j < width - 1; j++)
//         {
//             blurRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 9.0;
//             blurGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 9.0;
//             blurBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 9.0;
//             tmp[i][j].rgbtRed = round(blurRed);
//             tmp[i][j].rgbtGreen = round(blurGreen);
//             tmp[i][j].rgbtBlue = round(blurBlue);
//         }
//     }
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             tmp[i][j] = image[i][j];
//         }
//     }
// }
         
            // else if (i == 0 && (j > 0 && j < 0))
            // {
            //     blurRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed) / 6.0;
            //     blurGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen) / 6.0;
            //     blurBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue) / 6.0;
            
            //     image[i][j].rgbtRed = round(blurRed);
            //     image[i][j].rgbtGreen = round(blurGreen);
            //     image[i][j].rgbtBlue = round(blurBlue);
            // }
            // }
            // else
            // {
            //     blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 9.0;
            //     blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 9.0;
            //     blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 9.0;
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
            //}
//         }    
//     }        
// }            
            
            
            
            
            // blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 9;
            // blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 9;
            // blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 9;
            // image[i][j].rgbtRed = round(blorRed);
            // image[i][j].rgbtGreen = round(blorGreen);
            // image[i][j].rgbtBlue = round(blorBlue);
            // if (i == 0)
            // {
            //     //top row
            //     if (j == 0)
            //     {
            //         blorRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed)/ 4;
            //         blorGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen) / 4;
            //         blorBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue) / 4;
            
            //         image[i][j].rgbtRed = round(blorRed);
            //         image[i][j].rgbtGreen = round(blorGreen);
            //         image[i][j].rgbtBlue = round(blorBlue);  
            //     }
            //     else if (j == width - 1)
            //     {
            //         blorRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j - 1].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i][j].rgbtRed)/ 4;
            //         blorGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j - 1].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i][j].rgbtGreen) / 4;
            //         blorBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j - 1].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i][j].rgbtBlue) / 4;
            
            //         image[i][j].rgbtRed = round(blorRed);
            //         image[i][j].rgbtGreen = round(blorGreen);
            //         image[i][j].rgbtBlue = round(blorBlue);  
            //     }
            //     else 
            //     {
            //         blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed) / 6;
            //         blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen) / 6;
            //         blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue) / 6;
                
            //         image[i][j].rgbtRed = round(blorRed);
            //         image[i][j].rgbtGreen = round(blorGreen);
            //         image[i][j].rgbtBlue = round(blorBlue);
            //    }
            //}
//         }
//     } 
// }
    
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             if (i == 0)
//             {
//                 //top row
//                 if (j == 0)
//                 {
//                     blorRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed)/ 4;
//                     blorGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen) / 4;
//                     blorBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue) / 4;
            
//                     image[i][j].rgbtRed = round(blorRed);
//                     image[i][j].rgbtGreen = round(blorGreen);
//                     image[i][j].rgbtBlue = round(blorBlue);  
//                 }
//                 else if (j == width - 1)
//                 {
//                     blorRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j - 1].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i][j].rgbtRed)/ 4;
//                     blorGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j - 1].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i][j].rgbtGreen) / 4;
//                     blorBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j - 1].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i][j].rgbtBlue) / 4;
            
//                     image[i][j].rgbtRed = round(blorRed);
//                     image[i][j].rgbtGreen = round(blorGreen);
//                     image[i][j].rgbtBlue = round(blorBlue);  
//                 }
//                 else 
//                 {
//                     blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed) / 6;
//                     blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen) / 6;
//                     blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue) / 6;
                
//                     image[i][j].rgbtRed = round(blorRed);
//                     image[i][j].rgbtGreen = round(blorGreen);
//                     image[i][j].rgbtBlue = round(blorBlue);
//                 }
//             }
//             else if (i == height - 1)
//             {
//                 //bottom row
//                 if (j == 0)
//                 {
//                     blorRed = ((float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 4;
//                     blorGreen = ((float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 4;
//                     blorBlue = ((float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 4;
                
//                     image[i][j].rgbtRed = round(blorRed);
//                     image[i][j].rgbtGreen = round(blorGreen);
//                     image[i][j].rgbtBlue = round(blorBlue);
//                 }
//                 else if (j == width - 1)
//                 {
//                     blorRed = ((float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed) / 4;
//                     blorGreen = ((float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen) / 4;
//                     blorBlue = ((float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue) / 4;
                
//                     image[i][j].rgbtRed = round(blorRed);
//                     image[i][j].rgbtGreen = round(blorGreen);
//                     image[i][j].rgbtBlue = round(blorBlue);
//                 }
//                 else
//                 {
//                     blorRed = ((float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 6;
//                     blorGreen = ((float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 6;
//                     blorBlue = ((float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 6;
                
//                     image[i][j].rgbtRed = round(blorRed);
//                     image[i][j].rgbtGreen = round(blorGreen);
//                     image[i][j].rgbtBlue = round(blorBlue);
//                 }
//             }
//             else if (j == 0)
//             {
//                 blorRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 6;
//                 blorGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen) / 6;
//                 blorBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 6;
            
//                 image[i][j].rgbtRed = round(blorRed);
//                 image[i][j].rgbtGreen = round(blorGreen);
//                 image[i][j].rgbtBlue = round(blorBlue);
//             }
//             else if ( j == width - 1)
//             {
//                 blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed) / 6;
//                 blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen) / 6;
//                 blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue ) / 6;
            
//                 image[i][j].rgbtRed = round(blorRed);
//                 image[i][j].rgbtGreen = round(blorGreen);
//                 image[i][j].rgbtBlue = round(blorBlue);
//             }
            
//         }    
//     }
    
// }    
    
    
            // else if (i == 0 || (j > 0 && j < width - 1))
            // {
            //     blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed) / 6;
            //     blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen) / 6;
            //     blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue) / 6;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
                
            // }
            // else if (i == 0 && j == width - 1)
            // {
            //     blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed) / 4;
            //     blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen) / 4;
            //     blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue) / 4;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
                
            // }
            // if ((i > 0 && i < height - 1) && j == 0)
            // {
            //     blorRed = ((float) image[i + 1][0].rgbtRed + (float) image[i + 1][1].rgbtRed + (float) image[i][1].rgbtRed + (float) image[i][0].rgbtRed + (float) image[i - 1][0].rgbtRed + (float) image[i - 1][1].rgbtRed) / 6;
            //     blorGreen = ((float) image[i + 1][0].rgbtGreen + (float) image[i + 1][1].rgbtGreen + (float) image[i][1].rgbtGreen + (float) image[i][0].rgbtGreen + (float) image[i - 1][0].rgbtGreen + (float) image[1][1].rgbtGreen) / 6;
            //     blorBlue = ((float) image[i + 1][0].rgbtBlue + (float) image[i + 1][1].rgbtBlue + (float) image[i][1].rgbtBlue + (float) image[i][0].rgbtBlue + (float) image[i - 1][0].rgbtBlue + (float) image[i - 1][1].rgbtBlue) / 6;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
            // }
            // else if ((i == height - 1) && j == 0)
            // {
            //     blorRed = ((float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 4;
            //     blorGreen = ((float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 4;
            //     blorBlue = ((float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 4;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
            // }
            // else if ((i = height - 1) && (j > 0 && j < width - 1))
            // {
            //     blorRed = ((float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 6;
            //     blorGreen = ((float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 6;
            //     blorBlue = ((float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 6;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
            // }
            // else if ((i = height - 1) && (j == width - 1))
            // {
            //     blorRed = ((float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed) / 6;
            //     blorGreen = ((float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen) / 6;
            //     blorBlue = ((float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue) / 6;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
            // }
            // else if ((i > 0 && i < height - 1) && (j = width - 1)) 
            // {
            //     blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed) / 6;
            //     blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen) / 6;
            //     blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue ) / 6;
            
            //     image[i][j].rgbtRed = round(blorRed);
            //     image[i][j].rgbtGreen = round(blorGreen);
            //     image[i][j].rgbtBlue = round(blorBlue);
            // }
            
             // for (int j = 0; j < 1; j++)
        // {
        //     blorRed = ((float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 6;
        //     blorGreen = ((float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 6;
        //     blorBlue = ((float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 6;
        //     image[i][j].rgbtRed = round(blorRed);
        //     image[i][j].rgbtGreen = round(blorGreen);
        //     image[i][j].rgbtBlue = round(blorBlue);
        // }
            
//             else 
//             {
//             blorRed = ((float) image[i + 1][j - 1].rgbtRed + (float) image[i + 1][j].rgbtRed + (float) image[i + 1][j + 1].rgbtRed + (float) image[i][j + 1].rgbtRed + (float) image[i][j].rgbtRed + (float) image[i][j - 1].rgbtRed + (float) image[i - 1][j - 1].rgbtRed + (float) image[i - 1][j].rgbtRed + (float) image[i - 1][j + 1].rgbtRed) / 9;
//             blorGreen = ((float) image[i + 1][j - 1].rgbtGreen + (float) image[i + 1][j].rgbtGreen + (float) image[i + 1][j + 1].rgbtGreen + (float) image[i][j + 1].rgbtGreen + (float) image[i][j].rgbtGreen + (float) image[i][j - 1].rgbtGreen + (float) image[i - 1][j - 1].rgbtGreen + (float) image[i - 1][j].rgbtGreen + (float) image[i - 1][j + 1].rgbtGreen) / 9;
//             blorBlue = ((float) image[i + 1][j - 1].rgbtBlue + (float) image[i + 1][j].rgbtBlue + (float) image[i + 1][j + 1].rgbtBlue + (float) image[i][j + 1].rgbtBlue + (float) image[i][j].rgbtBlue + (float) image[i][j - 1].rgbtBlue + (float) image[i - 1][j - 1].rgbtBlue + (float) image[i - 1][j].rgbtBlue + (float) image[i - 1][j + 1].rgbtBlue) / 9;
//             image[i][j].rgbtRed = round(blorRed);
//             image[i][j].rgbtGreen = round(blorGreen);
//             image[i][j].rgbtBlue = round(blorBlue);
//             }
// //         }
//     }
// }

// //my filter
// void myfilt(int height, int width, RGBTRIPLE image[height][width])
// {
//     for (int i = 1; i < height - 1; i++)
//     {
//         for (int j = 1; j < width - 1; j++)
//         {
//             image[i][j].rgbtRed = (image[i + 1][j - 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1][j].rgbtRed + image[i][j + 1].rgbtRed + image[i][j].rgbtRed + image[i][j - 1].rgbtRed + image[i - 1][j - 1].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j + 1].rgbtRed) / 9;
//             image[i][j].rgbtGreen = (image[i + 1][j - 1].rgbtGreen + image[i + 1][j].rgbtGreen + image[i + 1][j].rgbtGreen + image[i][j + 1].rgbtGreen + image[i][j].rgbtGreen + image[i][j - 1].rgbtGreen + image[i - 1][j - 1].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j + 1].rgbtGreen) / 9;
//             image[i][j].rgbtBlue = (image[i + 1][j - 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i + 1][j].rgbtBlue + image[i][j + 1].rgbtBlue + image[i][j].rgbtBlue + image[i][j - 1].rgbtBlue + image[i - 1][j - 1].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j + 1].rgbtBlue) / 9;
//         }
//     }
// }
