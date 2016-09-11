int sub_80B1B14()
{
  int v1; // [sp+4h] [bp-4h]@0

  CreateTask((int)sub_80B1B68, 10);
  *(_WORD *)&gSprites[68 * v201925C + 36] = -70;
  gSprites[68 * v201925C + 62] &= 0xFBu;
  v201920A |= 0x40u;
  return v1;
}
