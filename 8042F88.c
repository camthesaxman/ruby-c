int sub_8042F88()
{
  int v1; // [sp+0h] [bp-4h]@0

  SetMonData((int)&dword_3004360[25 * v202E8CC], 2, (int)&gStringVar3);
  SetMainCallback2((int)c2_exit_to_overworld_2_switch);
  return v1;
}
