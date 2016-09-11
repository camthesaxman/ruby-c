int sub_80F4B20()
{
  int v0; // r5@3
  int v1; // r4@5
  int v3; // [sp+Ch] [bp-4h]@0

  sub_80F4900(v20087DC, 0);
  sub_80F2E18(0);
  if ( v20087DA == 1 )
  {
    v2008FE9 = 0;
    v2008FEA = 0;
    v2008FEB = 0;
  }
  else
  {
    v2008FE9 = 0;
    v2008FEA = 1;
    v2008FEB = 2;
    v0 = (v20087DC + 1) & 0xFFFF;
    if ( (signed __int16)(v20087DC + 1) >= v20087DA )
      LOWORD(v0) = 0;
    v1 = (v20087DC - 1) & 0xFFFF;
    if ( (v20087DC - 1) & 0x8000 )
      v1 = (v20087DA - 1) & 0xFFFF;
    sub_80F4900(v0, 1u);
    sub_80F4900(v1, 2u);
  }
  return v3;
}
