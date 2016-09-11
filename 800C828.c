int __fastcall unref_sub_800C828(unsigned __int8 a1, char a2, char *a3)
{
  int v3; // r4@1
  char *v4; // r1@2
  int v5; // r3@2
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = (unsigned __int8)a2;
  byte_3004040 = 14;
  byte_3004041 = a2;
  if ( 3 * (unsigned __int8)a2 )
  {
    v4 = &byte_3004042;
    v5 = 3 * v3;
    do
    {
      *v4++ = *a3++;
      --v5;
    }
    while ( v5 );
  }
  dp01_prepare_buffer(a1, &byte_3004040, 3 * v3 + 2);
  return v7;
}
