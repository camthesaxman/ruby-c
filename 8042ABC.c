signed int __fastcall sub_8042ABC(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r5@2
  signed int result; // r0@4
  int v6; // [sp+0h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  pokemon_get_nick_((unsigned int *)(a1 + 80 * a2), (int)&v6);
  if ( *(_WORD *)(v2 + 56 * v3 + 192)
    && ((v4 = v2 + 56 * v3 + 160, StringCompareWithoutExtCtrlCodes((int)&v6, v4 + 44))
     || StringCompareWithoutExtCtrlCodes(33705636, v4 + 36)) )
  {
    StringCopy(&gStringVar1, &v6);
    StringCopy(&gStringVar2, (_BYTE *)(v4 + 36));
    StringCopy(&gStringVar3, (_BYTE *)(v4 + 44));
    sub_814A568(&gStringVar2);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
