int __fastcall sub_813D368(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  SetOamMatrix(*(_WORD *)(a1 + 48) & 0xFF, *(_WORD *)(v1 + 58) + 64, 0, 0, *(_WORD *)(v1 + 58) + 64);
  SetOamMatrix((*(_WORD *)(v1 + 48) + 1) & 0xFF, *(_WORD *)(v1 + 58) + 64, 0, 0, *(_WORD *)(v1 + 58) + 64);
  SetOamMatrix((*(_WORD *)(v1 + 48) + 2) & 0xFF, *(_WORD *)(v1 + 58) + 64, 0, 0, *(_WORD *)(v1 + 58) + 64);
  if ( *(_WORD *)(v1 + 54) == 64 )
  {
    *(_WORD *)(v1 + 54) = 0;
    *(_DWORD *)(v1 + 28) = sub_813D414;
  }
  else
  {
    *(_WORD *)(v1 + 54) -= 8;
    v2 = *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 36) = *(_WORD *)((char *)gSineTable + (2 * (v2 + 64) & 0x1FF)) / 64;
    *(_WORD *)(v1 + 38) = *(_WORD *)((char *)gSineTable + (2 * v2 & 0x1FF)) / 64;
  }
  return v4;
}
