signed int __fastcall sub_804602C(signed int a1, int a2, int a3, _DWORD *a4, _BYTE *a5, unsigned __int8 a6)
{
  _DWORD *v6; // r12@1
  int v7; // r5@1
  int v8; // r3@5
  unsigned int i; // r1@5
  int v10; // r0@8
  unsigned int v11; // r0@10
  unsigned int v12; // r2@10
  signed int v13; // r3@10
  unsigned int j; // r1@13

  v6 = a4;
  v7 = a2 - a3;
  if ( a2 - a3 >= 0 )
  {
    if ( v7 > a1 )
      v7 = a1;
  }
  else
  {
    v7 = 0;
  }
  v8 = 8 * a6 & 0xFF;
  for ( i = 0; i < a6; i = (i + 1) & 0xFF )
    a5[i] = 0;
  if ( a1 >= v8 )
    v10 = *v6 * v8 / a1;
  else
    v10 = *v6 * v8 / a1 >> 8;
  v11 = v10 << 24;
  v12 = v11 >> 24;
  v13 = v11 >> 24;
  if ( v11 >> 24 || v7 <= 0 )
  {
    for ( j = 0; j < a6; j = (j + 1) & 0xFF )
    {
      if ( v12 <= 7 )
      {
        a5[j] = v12;
        return v13;
      }
      a5[j] = 8;
      v12 = (v12 - 8) & 0xFF;
    }
  }
  else
  {
    *a5 = 1;
    v13 = 1;
  }
  return v13;
}
