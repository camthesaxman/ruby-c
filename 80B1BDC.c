int sub_80B1BDC()
{
  char v0; // r0@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( gSprites[68 * v201925C + 62] & 4 )
  {
    v0 = v201920A & 0xBF;
  }
  else
  {
    CreateTask((int)sub_80B1C34, 10);
    *(_WORD *)&gSprites[68 * v201925C + 36] = 0;
    v0 = v201920A | 0x40;
  }
  v201920A = v0;
  return v2;
}
