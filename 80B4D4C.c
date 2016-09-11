unsigned int __fastcall BerryTreeGetNumStagesWatered(int a1)
{
  unsigned int v1; // r1@1

  v1 = (unsigned int)-(*(_BYTE *)(a1 + 5) & 0x10) >> 31;
  if ( *(_BYTE *)(a1 + 5) & 0x20 )
    ++v1;
  if ( *(_BYTE *)(a1 + 5) & 0x40 )
    v1 = (v1 + 1) & 0xFF;
  if ( *(_BYTE *)(a1 + 5) & 0x80 )
    v1 = (v1 + 1) & 0xFF;
  return v1;
}
