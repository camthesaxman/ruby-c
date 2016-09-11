int __fastcall unref_sub_800CE3C(unsigned __int8 a1, __int16 a2, _BYTE *a3)
{
  int v3; // r4@1
  _BYTE *v4; // r1@2
  int v5; // r3@2
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = (unsigned __int16)a2;
  byte_3004040 = 31;
  word_3004041 = a2;
  if ( a2 )
  {
    v4 = &unk_3004043;
    v5 = v3;
    do
    {
      *v4++ = *a3++;
      --v5;
    }
    while ( v5 );
  }
  dp01_prepare_buffer(a1, &byte_3004040, (v3 + 3) & 0xFFFF);
  return v7;
}
