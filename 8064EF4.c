int __fastcall SetTextWindowBaseTileNum(__int16 a1)
{
  sTextWindowBaseTileNum = a1;
  return ((unsigned __int16)a1 + 9) & 0xFFFF;
}
