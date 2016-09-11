int __fastcall sub_8088FFC(int result, unsigned __int8 a2)
{
  result = (unsigned __int8)result;
  *(_WORD *)&gSprites[68 * (unsigned __int8)result + 58] = a2;
  return result;
}
