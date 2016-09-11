int __fastcall SetMessageBoxBaseTileNum(__int16 a1)
{
  sMessageBoxBaseTileNum = a1;
  return ((unsigned __int16)a1 + 14) & 0xFFFF;
}
