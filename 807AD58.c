int sub_807AD58()
{
  int v1; // [sp+0h] [bp-4h]@0

  v202F390 |= 0x80u;
  SetHBlankCallback(0);
  SetVBlankCallback(0);
  v400004C = 0;
  v201FFFF = 0;
  v201FFFE = 0;
  SetMainCallback2((int)sub_807ADA8);
  return v1;
}
