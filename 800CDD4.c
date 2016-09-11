int __fastcall unref_sub_800CDD4(unsigned __int8 a1, int a2, int a3, char *a4)
{
  char *v4; // r4@1
  int v5; // r5@1
  char *v6; // r3@2
  int v8; // [sp+Ch] [bp-4h]@0

  v4 = a4;
  v5 = (unsigned __int16)a3;
  byte_3004040 = 30;
  unk_3004041 = a2;
  LOBYTE(word_3004042) = (unsigned __int16)(a2 & 0xFF00) >> 8;
  HIBYTE(word_3004042) = (a2 & 0xFF0000u) >> 16;
  LOBYTE(word_3004044) = BYTE3(a2);
  HIBYTE(word_3004044) = a3;
  LOBYTE(word_3004046) = (unsigned __int16)(a3 & 0xFF00) >> 8;
  if ( (_WORD)a3 )
  {
    v6 = (char *)&word_3004046 + 1;
    a3 = (unsigned __int16)a3;
    do
    {
      *v6++ = *v4++;
      --a3;
    }
    while ( a3 );
  }
  dp01_prepare_buffer(a1, &byte_3004040, (v5 + 7) & 0xFFFF);
  return v8;
}
