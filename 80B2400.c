int __fastcall sub_80B2400(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  signed int v3; // r1@1
  signed int v4; // r2@8
  int v5; // r6@8
  unsigned __int8 v6; // r0@14
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 != 1 )
  {
    if ( v3 <= 1 )
    {
      if ( !*((_WORD *)v2 + 4) )
      {
        v4 = 0;
        v5 = 4 * a1;
        do
        {
          *(_BYTE *)(v4 + 33657368) = *(_BYTE *)(v4 + 33785494);
          ++v4;
        }
        while ( v4 <= 3 );
        sub_80AFA5C();
        sub_80B0588();
        sub_80AEF50();
        sub_80B1118();
        sub_80B1FD0(1u);
        sub_80AFFA0();
        LOWORD(dword_3004B20[2 * (v5 + v1) + 2]) = 1;
      }
      return v8;
    }
    if ( v3 != 2 )
    {
      if ( v3 == 3 )
      {
        sub_80AF120();
        sub_80AEB30();
        *((_WORD *)v2 + 4) = 0;
        *v2 = (int)sub_80B253C;
      }
      return v8;
    }
    if ( v201920B & 4 )
      return v8;
_080B24E2:
    *((_WORD *)v2 + 4) = 3;
    return v8;
  }
  if ( !(v203869A & 1) )
  {
    sub_80AF438();
    goto _080B24E2;
  }
  v201920B |= 4u;
  if ( sub_80AE074() << 24 )
    sub_80AF438();
  v6 = CreateTask((int)sub_80C8C80, 0);
  SetTaskFuncWithFollowupFunc(v6, (int)sub_80C8C80, (int)sub_80AD8DC);
  sub_80AF860();
  *((_WORD *)v2 + 4) = 2;
  return v8;
}
