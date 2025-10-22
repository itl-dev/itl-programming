#include <xlsxwriter.h>

int main(void) {
    lxw_workbook  *workbook  = workbook_new("output.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    worksheet_write_string(worksheet, 0, 0, "Hello", NULL);
    worksheet_write_number(worksheet, 1, 0, 1234.56, NULL);
    worksheet_write_string(worksheet, 0, 1, "世界", NULL);
    worksheet_write_formula(worksheet, 2, 0, "=SUM(A2)", NULL);

    return workbook_close(workbook);
}