signed int sub_80F9284()
{
  signed int result; // r0@3

  if ( v2024EB7 != 1 )
    goto LABEL_9;
  if ( word_300179E & 0x200 )
    return 1;
  if ( word_300179E & 0x100 )
    result = 2;
  else
LABEL_9:
    result = 0;
  return result;
}
