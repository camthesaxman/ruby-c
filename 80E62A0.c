int __fastcall sub_80E62A0(char a1, int a2, int a3, char a4)
{
  int v5; // [sp+4h] [bp-4h]@0

  v2001000 = a3;
  v2001004 = a2;
  v2001008 = a1;
  v200100B = a4;
  if ( a1 == 9 )
  {
    v2001004 = 33598588;
    v200AC7C = v202850C;
    v200AC7E = v202850E;
  }
  SetMainCallback2((int)sub_80E62F8);
  return v5;
}
