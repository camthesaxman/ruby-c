int sub_810EEDC()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v203925C & 1 )
    SetBgTilemapBuffer(1u);
  if ( (unsigned int)v203925C >> 1 == 1 )
    SetBgTilemapBuffer(0);
  BuyMenuFreeMemory();
  return v1;
}
