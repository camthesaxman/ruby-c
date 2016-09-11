_BOOL4 __fastcall AreZCoordsCompatible(int a1, int a2)
{
  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int8)a2;
  return !(_BYTE)a1 || !a2 || a1 == a2;
}
