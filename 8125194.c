int calls_flash_erase_block()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    call_via_r1(v0, EraseFlashSector);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x1F );
  return v2;
}
