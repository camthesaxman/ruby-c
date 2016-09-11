int __fastcall sub_80D4044(int a1)
{
  int v1; // r4@1
  __int16 v2; // r5@1
  __int16 v3; // r0@1
  int v4; // r1@1
  int v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | ((*(_WORD *)(a1 + 4) & 0x3FF) + 8) & 0x3FF;
  sub_8078764(a1, 1);
  v2 = (unsigned __int8)Random() | 0x100;
  v3 = Random();
  LOWORD(v4) = v3 & 0x1FF;
  v5 = v3 & 0x1FF;
  if ( v5 > 255 )
    v4 = (256 - v5) & 0xFFFF;
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 50) = v4;
  *(_DWORD *)(v1 + 28) = sub_80D40A8;
  return v7;
}
