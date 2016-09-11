signed int __fastcall IsThereStorageSpaceForDecoration(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r5@2
  int v3; // r2@2
  signed int result; // r0@3

  v1 = a1;
  if ( a1 && (v2 = *((_BYTE *)&gDecorations + 32 * a1 + 19), v3 = (char)sub_8133F9C(v2), v3 != -1) )
  {
    *(_BYTE *)(*(_DWORD *)&gUnknown_08402E40[8 * v2] + v3) = v1;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
