int __fastcall FieldObjectUpdateZCoord(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  char v4; // r2@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)MapGridGetZCoordAt(*(_WORD *)(a1 + 16), *(_WORD *)(a1 + 18));
  v3 = (unsigned __int8)MapGridGetZCoordAt(*(_WORD *)(v1 + 20), *(_WORD *)(v1 + 22));
  if ( v2 != 15 && v3 != 15 )
  {
    v4 = *(_BYTE *)(v1 + 11) & 0xF0 | v2 & 0xF;
    *(_BYTE *)(v1 + 11) = v4;
    if ( v2 )
    {
      if ( v2 != 15 )
        *(_BYTE *)(v1 + 11) = v4 & 0xF | 16 * v2;
    }
  }
  return v6;
}
