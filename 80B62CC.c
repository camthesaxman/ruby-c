int __fastcall sub_80B62CC(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r1@1
  int v3; // r6@7
  int v4; // r1@7
  __int16 v5; // r3@7
  __int16 *v6; // r1@15
  signed __int16 v7; // r0@15
  __int16 v8; // r0@19
  unsigned __int16 v10; // [sp+0h] [bp-14h]@1
  signed int v11; // [sp+2h] [bp-12h]@1
  int v12; // [sp+10h] [bp-4h]@38

  v1 = a1;
  sub_80B6858(&v10, &v11);
  v2 = (unsigned int)-(word_30017A0 & 0x40) >> 31;
  if ( word_30017A0 & 0x80 )
    v2 = 2;
  if ( word_30017A0 & 0x20 )
    v2 = 3;
  if ( word_30017A0 & 0x10 )
    v2 = 4;
  v3 = v10;
  v4 = 2 * v2;
  v5 = *(_WORD *)((char *)&gUnknown_083CE258 + v4);
  v10 += v5;
  LOWORD(v11) = *(_WORD *)((char *)&gUnknown_083CE262 + v4) + v11;
  if ( (v10 & 0x8000u) != 0 )
    v10 = 8;
  if ( (signed __int16)v10 > 8 )
    v10 = 0;
  if ( v5 )
  {
    if ( v200000E == 2 && ((v10 - 6) & 0xFFFFu) <= 1 )
    {
      if ( v5 <= 0 )
      {
        v6 = (__int16 *)&v10;
        v7 = 5;
      }
      else
      {
        v6 = (__int16 *)&v10;
        v7 = 8;
      }
      *v6 = v7;
    }
    if ( v10 == 8 )
    {
      *(_WORD *)(v1 + 12) = v11;
      v8 = gUnknown_083CE26C[(signed __int16)v11];
    }
    else
    {
      if ( v3 != 8 )
        goto _080B63CA;
      if ( (signed __int16)v11 == 1 )
        v8 = *(_WORD *)(v1 + 12);
      else
        v8 = gUnknown_083CE274[(signed __int16)v11];
    }
    LOWORD(v11) = v8;
  }
_080B63CA:
  if ( v10 == 8 )
  {
    if ( (signed __int16)v11 < 0 )
      LOWORD(v11) = 2;
    if ( (signed __int16)v11 > 2 )
      LOWORD(v11) = 0;
    if ( (_WORD)v11 )
    {
      if ( (signed __int16)v11 == 2 )
        *(_WORD *)(v1 + 12) = 2;
    }
    else
    {
      *(_WORD *)(v1 + 12) = 1;
    }
  }
  else
  {
    if ( (signed __int16)v11 < 0 )
      LOWORD(v11) = 3;
    if ( (signed __int16)v11 > 3 )
      LOWORD(v11) = 0;
  }
  sub_80B680C((signed __int16)v10, (signed __int16)v11);
  return v12;
}
