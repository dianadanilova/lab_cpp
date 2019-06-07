using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab_15
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Calculate_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Calculation completed!");
            int number;
            number = Int32.Parse(textBox1.Text);      
            number = number * number;            
            textBox2.Text = number.ToString();
            System.Convert.ToString(number);
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            return;
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            return;
        }
    }
}
