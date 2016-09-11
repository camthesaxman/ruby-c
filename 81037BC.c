_BOOL4 __fastcall sub_81037BC(int a1, int a2, int a3)
{
  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int8)a2;
  a3 = (unsigned __int8)a3;
  return ((_BYTE)a1 || a2 != 1 || a3)
      && (a1 != 1 || a2 || a3 != 1)
      && (a1 || a2 || a3 != 1)
      && (a1 != 1 || a2 != 1 || a3)
      && (a1 != a2 || a1 != a3);
}
