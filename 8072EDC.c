int sub_8072EDC()
{
  int v1; // [sp+4h] [bp-4h]@0

  sub_8072DF8();
  if ( (unsigned __int16)++word_30006C2 >= (unsigned int)(unsigned __int16)word_30006C4 )
    word_30006C2 = 0;
  if ( (unsigned __int16)++word_30006C6 >= (unsigned int)(unsigned __int16)word_30006C8 )
    word_30006C6 = 0;
  if ( dword_30006CC )
    call_via_r1((unsigned __int16)word_30006C2, dword_30006CC);
  if ( dword_30006D0 )
    call_via_r1((unsigned __int16)word_30006C6, dword_30006D0);
  return v1;
}
