int __fastcall sub_80A1BC0(int a1)
{
  int v1; // r2@1
  int v2; // r0@2
  _BYTE *v3; // r3@3
  char v4; // r0@3
  char v5; // r1@4
  char v6; // r0@4
  _BYTE *v7; // r0@8
  int v9; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( ((*(_BYTE *)(a1 + 42) - 4) & 0xFFu) > 2 )
  {
    *(_WORD *)(a1 + 48) = 0;
    v3 = (_BYTE *)(a1 + 62);
    v5 = *(_BYTE *)(a1 + 62);
    v6 = -5;
  }
  else
  {
    v2 = (*(_WORD *)(a1 + 48) + 1) & 0x1F;
    *(_WORD *)(v1 + 48) = v2;
    if ( v2 > 24 )
    {
      v3 = (_BYTE *)(v1 + 62);
      v4 = *(_BYTE *)(v1 + 62) | 4;
      goto _080A1C06;
    }
    v3 = (_BYTE *)(v1 + 62);
    v5 = *(_BYTE *)(v1 + 62);
    v6 = -5;
  }
  v4 = v6 & v5;
_080A1C06:
  *v3 = v4;
  if ( *(_WORD *)(v1 + 46) == 9 )
    v7 = (_BYTE *)33652857;
  else
    v7 = (_BYTE *)33652858;
  *(_WORD *)(v1 + 38) = 16 * *v7;
  return v9;
}
