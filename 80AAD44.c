int __fastcall sub_80AAD44(int a1, char a2)
{
  signed int v2; // r4@2
  _WORD *v3; // r5@2
  int v5; // [sp+8h] [bp-4h]@0

  if ( a2 == 1 )
  {
    sub_80AA69C();
    v2 = 0;
    v3 = (_WORD *)33785456;
    do
    {
      *v3 = sub_80AE770((unsigned __int8)v2, v203869C);
      ++v3;
      ++v2;
    }
    while ( v2 <= 3 );
    SetMainCallback2((int)sub_805469C);
  }
  return v5;
}
