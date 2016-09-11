signed int __fastcall sub_8083BF4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@2

  v1 = a1;
  v202E8D0 = a1;
  StringCopy(&gStringVar1, (_BYTE *)&unk_3002978 + 28 * a1);
  v2 = sub_80934C4(v1) & 0xFF;
  if ( v2 )
  {
    StringCopy(&gStringVar2, *(&gTrainerCardColorNames + v2 - 1));
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
