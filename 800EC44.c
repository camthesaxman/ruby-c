int __fastcall shedinja_something(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-1Ch]@3
  unsigned __int8 v4; // [sp+Ch] [bp-10h]@1
  int v5; // [sp+18h] [bp-4h]@5

  v1 = a1;
  v4 = 1;
  if ( GetMonData(a1, 11) == 303 && GetMonData(v1, 3) != v4 )
  {
    GetMonData(v1, 2);
    if ( !StringCompareWithoutExtCtrlCodes((int)&v3, (int)&gUnknown_081F96C8) )
      SetMonData(v1, 3, &v4);
  }
  return v5;
}
