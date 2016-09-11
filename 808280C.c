void *__fastcall ReturnEmptyStringIfNull(void *result)
{
  if ( !result )
    result = &OtherText_Terminator19;
  return result;
}
