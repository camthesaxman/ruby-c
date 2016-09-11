int __fastcall sub_80845AC(int a1, int a2, _BYTE *a3)
{
  int v3; // r4@1

  v3 = a2;
  if ( FieldObjectClearAnimIfSpecialAnimFinished(a3) << 24 )
    *(_WORD *)(v3 + 8) = 3;
  return 0;
}
