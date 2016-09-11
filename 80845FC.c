int __fastcall sub_80845FC(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  _BYTE *v4; // r4@1

  v3 = a2;
  v4 = a3;
  if ( FieldObjectCheckIfSpecialAnimFinishedOrInactive(a3) << 24 )
  {
    v202FF84 = *((_WORD *)v4 + 8);
    v202FF88 = *((_WORD *)v4 + 9);
    v202FF8C = (unsigned __int8)gSprites[68 * v4[4] + 67] - 1;
    v202FF90 = 2;
    *(_WORD *)(v3 + 16) = FieldEffectStart(49);
    ++*(_WORD *)(v3 + 8);
  }
  return 0;
}
