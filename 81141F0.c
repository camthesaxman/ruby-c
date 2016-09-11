int __fastcall sub_81141F0(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r1@1
  _BYTE *v8; // r5@1
  __int16 v9; // r7@1
  _BYTE *v10; // r2@1
  unsigned int v11; // r1@1
  unsigned int v12; // r0@1
  __int16 v13; // r1@2
  __int16 v14; // r0@2
  __int16 v15; // r7@6
  _BYTE *v16; // r6@6
  int v17; // r1@6
  _BYTE *v18; // r5@6
  unsigned int v19; // r2@6
  unsigned int v20; // r0@6
  __int16 v21; // r1@7
  __int16 v22; // r0@7
  int v24; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a2 + 32 * a3;
  v7 = a1 + 32 * a3;
  v8 = (_BYTE *)(v7 + 33642692);
  *(_BYTE *)(v6 + 33650884) = *(_BYTE *)(v7 + 33642692);
  *(_BYTE *)(v6 + 33652932) = *(_BYTE *)(v7 + 33644740);
  v9 = 0;
  v10 = (_BYTE *)(v6 + 33646788);
  v11 = *(_BYTE *)(v7 + 33642692);
  v12 = *(_BYTE *)(v6 + 33646788);
  if ( v11 >= v12 )
  {
    if ( v11 <= v12 )
      goto _08114278;
    *(_BYTE *)(v6 + 33638596) = 1;
    v13 = *v8;
    v14 = *v10;
  }
  else
  {
    *(_BYTE *)(v6 + 33638596) = 4;
    v13 = *v10;
    v14 = *v8;
  }
  v9 = v13 - v14;
_08114278:
  *(_WORD *)(2 * v4 + (v5 << 6) + 0x201C8C4) = 16 * v9;
  v15 = 0;
  v16 = (_BYTE *)(v3 + 32 * v5 + 33644740);
  v17 = v4 + 32 * v5;
  v18 = (_BYTE *)(v17 + 33648836);
  v19 = *v16;
  v20 = *(_BYTE *)(v17 + 33648836);
  if ( v19 < v20 )
  {
    *(_BYTE *)(v17 + 33640644) = 3;
    v21 = *v18;
    v22 = *v16;
_081142DE:
    v15 = v21 - v22;
    goto _081142E0;
  }
  if ( v19 > v20 )
  {
    *(_BYTE *)(v17 + 33640644) = 2;
    v21 = *v16;
    v22 = *v18;
    goto _081142DE;
  }
_081142E0:
  *(_WORD *)(2 * v4 + (v5 << 6) + 0x201D8C4) = 16 * v15;
  ++*(_BYTE *)(v5 + 33638532);
  return v24;
}
