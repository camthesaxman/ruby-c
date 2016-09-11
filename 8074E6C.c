signed int __fastcall ducking_tick(char a1)
{
  signed int result; // r0@2

  if ( word_30006DA )
  {
    --word_30006DA;
    result = 0;
  }
  else
  {
    if ( a1 )
      m4aSongNumStart(0);
    else
      m4aMPlayContinue(&unk_3007380);
    result = 1;
  }
  return result;
}
