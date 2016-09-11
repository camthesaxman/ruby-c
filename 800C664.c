int __fastcall dp01_build_cmdbuf_x02_a_b_varargs(unsigned __int8 a1, char a2, char a3, unsigned __int8 a4, char *a5)
{
  char *v5; // r4@1
  int v6; // r5@1
  char *v7; // r3@2
  int v8; // r2@2
  int v10; // [sp+Ch] [bp-4h]@0

  v5 = a5;
  v6 = a4;
  byte_3004040 = 2;
  byte_3004041 = a2;
  byte_3004042 = a3;
  if ( a4 )
  {
    v7 = &byte_3004043;
    v8 = v6;
    do
    {
      *v7++ = *v5++;
      --v8;
    }
    while ( v8 );
  }
  dp01_prepare_buffer(a1, &byte_3004040, v6 + 3);
  return v10;
}
