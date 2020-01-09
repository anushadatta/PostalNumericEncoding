# Postal Numeric Encoding Technique (POSTNET)
POSTNET is a barcode symbology used by the United States Postal Service to facilitate faster sorting of letters. It essentially generates a bar code to denote the zip code of each mail item.

## Encoding Standard
### Encoding Table
The table given below entails the numeric value of each digit, the corresponding bar code, and binary representation where 0 is a half-height bar and 1 is a full-height bar. 

![ Barcode Encoding ](https://www.barcode.ro/tutorials/barcodes/img/postnet2.gif)

### Check Digit 
Each zip code will be associated with a check digit. The encoded digits are followed by a check digit, which is computed as follows: Add up all digits of the zip code (form the cross sum). Then choose (add) a check digit to make the sum a multiple of 10. For example, the fivedigit zip code 96103 has a cross sum of 19, so the check digit is 1 to make the sum equal to 20 (which is a multiple of 10). This check digit shall also be encoded (using table above) and appended to the end of the encoded zip code.  
 

For more information about POSTNET click [ here. ](https://en.wikipedia.org/wiki/POSTNET)
