int __fastcall sub_809B548(int a1, unsigned __int8 a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 14 )
    ZeroMonData((int)&dword_3004360[25 * a2]);
  else
    ZeroBoxMonData(2400 * a1 + 80 * a2 + 33751204);
  return v3;
}
