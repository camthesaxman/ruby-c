signed int __fastcall sub_8040300(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  signed int result; // r0@2
  unsigned __int8 v4; // [sp+0h] [bp-14h]@1

  v1 = a1;
  v2 = (unsigned __int16)GetMonData(a1, 11, 0);
  v4 = GetMonData(v1, 56, 0) + 1;
  if ( (unsigned int)GetMonData(v1, 25, 0) > *(&gExperienceTables[101 * *((_BYTE *)&gBaseStats + 28 * v2 + 19)] + v4) )
  {
    SetMonData(v1, 56, (int)&v4);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
