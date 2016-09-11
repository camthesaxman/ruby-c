int __fastcall DoNamingScreen(unsigned __int8 a1)
{
  int v2; // [sp+10h] [bp-4h]@0

  AddNamingScreenTask(a1);
  SetMainCallback2((int)C2_NamingScreen);
  return v2;
}
