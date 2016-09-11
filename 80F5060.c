int __fastcall sub_80F5060(unsigned __int8 a1)
{
  int v1; // r7@1
  _BYTE *v2; // r0@2
  int v3; // r6@4
  unsigned int v4; // r12@4
  __int16 v5; // r2@6
  int *v6; // r2@8
  __int16 v7; // r1@9
  __int16 v8; // r3@12
  int v9; // r1@17
  int (**v10)(); // r1@18
  int (*v11)(); // r0@18
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( a1 )
    v2 = (_BYTE *)33591275;
  else
    v2 = (_BYTE *)33591274;
  v3 = *v2 & 0xFFFF;
  sub_80F53EC(20 * v2008FE9 + 33591300, 20 * v3 + 33591300);
  v4 = (unsigned int)*(_BYTE *)(4 * v20087DC + 0x200893F) << 25 >> 31;
  if ( v1 )
  {
    v2008FEB = v2008FEA;
    v2008FEA = v2008FE9;
    v2008FE9 = v3;
    v2008FEC = v2008FEB;
    if ( v20087DC )
      v5 = v20087DC - 1;
    else
      v5 = v20087DA - 1;
    v20087DC = v5;
    v6 = &gUnknown_083DFEC4;
    if ( v20087DC )
      v7 = v20087DC - 1;
    else
      v7 = v20087DA - 1;
  }
  else
  {
    v2008FEA = v2008FEB;
    v2008FEB = v2008FE9;
    v2008FE9 = v3;
    v2008FEC = v2008FEA;
    if ( v20087DC >= v20087DA - 1 )
      v8 = 0;
    else
      v8 = v20087DC + 1;
    v20087DC = v8;
    v6 = &gUnknown_083DFEC4;
    if ( v8 >= v20087DA - 1 )
      v7 = 0;
    else
      v7 = v20087DC + 1;
  }
  v2008FEE = v7;
  v9 = *v6;
  if ( v4 )
  {
    if ( (unsigned int)*(_BYTE *)(*v6 + 4 * *(_WORD *)(*v6 + 34780) + 35135) << 25 >> 31 )
    {
      v10 = (int (**)())(v9 + 34784);
      v11 = sub_80F5364;
    }
    else
    {
      v10 = (int (**)())(v9 + 34784);
      v11 = sub_80F52F8;
    }
  }
  else
  {
    v10 = (int (**)())(v9 + 34784);
    v11 = sub_80F5264;
  }
  *v10 = v11;
  *(_BYTE *)(*v6 + 34782) = 0;
  return v13;
}
