int sub_80C4F10()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( v203856C )
  {
    sub_80AAF30();
    v2015DDF = 1;
    v2015DDE = sub_80B2C4C(254, 0);
    sub_80B2A7C(3u);
    v203856C = 0;
  }
  SetMainCallback2((int)sub_8106668);
  dword_3001778 = (int)sub_80C4F00;
  return v1;
}
