int __fastcall sub_80A0664(int a1)
{
  int v1; // r6@1
  int v2; // r1@2
  int v3; // r5@2
  int v4; // r2@2
  int result; // r0@6

  v1 = a1;
  if ( (_UNKNOWN *)v2018000 == &unk_30045C0 )
  {
    v2 = 7 * ((GetMultiplayerId() ^ 1) & 0xFF);
    v3 = LOWORD(dword_3002974[v2]);
    StringCopy(&gStringVar1, &byte_3002978[v2 * 4]);
    SkipExtCtrlCodes(&gStringVar1);
  }
  else
  {
    v3 = (unsigned __int16)sub_80BFB94();
    StringCopy(&gStringVar1, (_BYTE *)0x2024EA4);
  }
  result = 0;
  if ( v3 == (unsigned __int16)GetMonData(v1, 1, v4) )
  {
    GetMonData(v1, 7, (int)&gStringVar2);
    if ( !StringCompareWithoutExtCtrlCodes((int)&gStringVar1, (int)&gStringVar2) )
      result = 1;
  }
  return result;
}
