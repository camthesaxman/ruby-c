int __fastcall sub_8010278(int a1)
{
  int v1; // r2@1
  int v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( !(v2024DE8 & 1) )
  {
    v2 = *(_WORD *)(a1 + 36) + 2;
    *(_WORD *)(v1 + 36) = v2;
    if ( !(v2 << 16) )
    {
      *(_DWORD *)(v1 + 28) = sub_80102AC;
      cry_related(*(_WORD *)(v1 + 50), 25);
    }
  }
  return v4;
}
