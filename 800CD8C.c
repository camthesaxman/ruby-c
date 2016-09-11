int __fastcall dp01_build_cmdbuf_x1D_1D_numargs_varargs(unsigned __int8 a1, __int16 a2, _BYTE *a3)
{
  int v3; // r4@1
  __int16 *v4; // r1@2
  int v5; // r3@2
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = (unsigned __int16)a2;
  byte_3004040 = 29;
  unk_3004041 = 29;
  word_3004042 = a2;
  if ( a2 )
  {
    v4 = &word_3004044;
    v5 = v3;
    do
    {
      *(_BYTE *)v4 = *a3++;
      v4 = (__int16 *)((char *)v4 + 1);
      --v5;
    }
    while ( v5 );
  }
  dp01_prepare_buffer(a1, &byte_3004040, (v3 + 4) & 0xFFFF);
  return v7;
}
