int __fastcall sub_8101118(int a1, int a2)
{
  int v2; // r2@1
  char *v3; // r0@1
  int v4; // r1@1
  char v5; // r0@2
  char v6; // r0@8
  int v8; // [sp+0h] [bp-4h]@0

  v2 = a2;
  v3 = (char *)&gDecorations + (32 * a1 & 0x1FFF);
  v4 = (unsigned __int8)v3[18];
  if ( !v3[18] )
  {
    v5 = 1;
    *(_BYTE *)(v2 + 1) = 1;
_08101192:
    *(_BYTE *)(v2 + 2) = v5;
    return v8;
  }
  if ( v4 == 1 )
  {
    *(_BYTE *)(v2 + 1) = 2;
    *(_BYTE *)(v2 + 2) = 1;
    return v8;
  }
  if ( v4 == 2 )
  {
    *(_BYTE *)(v2 + 1) = 3;
    v5 = 1;
    goto _08101192;
  }
  if ( v4 == 3 )
  {
    v6 = 4;
_0810118E:
    *(_BYTE *)(v2 + 1) = v6;
    v5 = 2;
    goto _08101192;
  }
  if ( v4 == 4 )
  {
    v5 = 2;
    *(_BYTE *)(v2 + 1) = 2;
    goto _08101192;
  }
  if ( v4 == 5 )
  {
    v6 = 1;
    goto _0810118E;
  }
  if ( v4 == 6 )
  {
    *(_BYTE *)(v2 + 1) = 1;
    v5 = 3;
    goto _08101192;
  }
  if ( v4 == 7 )
  {
    *(_BYTE *)(v2 + 1) = 2;
    v5 = 4;
    goto _08101192;
  }
  if ( v4 == 8 )
  {
    v5 = 3;
    *(_BYTE *)(v2 + 1) = 3;
    goto _08101192;
  }
  if ( v4 == 9 )
  {
    v6 = 3;
    goto _0810118E;
  }
  return v8;
}
