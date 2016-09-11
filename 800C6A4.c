int __fastcall unref_sub_800C6A4(unsigned __int8 a1, char a2, int a3, char *a4)
{
  int v4; // r4@1
  char *v5; // r1@2
  int v7; // [sp+Ch] [bp-4h]@0

  v4 = (unsigned __int8)a3;
  byte_3004040 = 3;
  byte_3004041 = a2;
  byte_3004042 = a3;
  if ( (_BYTE)a3 )
  {
    v5 = &byte_3004043;
    a3 = (unsigned __int8)a3;
    do
    {
      *v5++ = *a4++;
      --a3;
    }
    while ( a3 );
  }
  dp01_prepare_buffer(a1, &byte_3004040, v4 + 3);
  return v7;
}
