int __fastcall FieldObjectSetDirection(int a1, char a2)
{
  int v3; // [sp+4h] [bp-4h]@0

  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a1 + 24) & 0xF;
  if ( !(*(_BYTE *)(a1 + 1) & 2) )
    *(_BYTE *)(a1 + 24) = *(_BYTE *)(a1 + 24) & 0xF0 | a2 & 0xF;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a1 + 24) & 0xF | 16 * a2;
  return v3;
}
